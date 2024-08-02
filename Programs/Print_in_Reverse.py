class SinglyLinkedListNode:
    def __init__(self, data):
        self.data = data
        self.next = None

def reversePrint(head):
    stack = []
    current = head
    
    # Traverse the linked list and push each element onto the stack
    while current:
        stack.append(current.data)
        current = current.next
    
    # Pop elements from the stack and print them to reverse the order
    while stack:
        print(stack.pop())

# Sample input parsing and function calls
if __name__ == "__main__":
    test_cases = int(input())
    
    for _ in range(test_cases):
        num_elements = int(input())
        elements = []
        
        for _ in range(num_elements):
            element = int(input())
            elements.append(element)
        
        # Create a linked list from the input elements
        head = None
        current = None
        for element in elements:
            if head is None:
                head = SinglyLinkedListNode(element)
                current = head
            else:
                current.next = SinglyLinkedListNode(element)
                current = current.next
        
        # Call the reversePrint function for each test case
        reversePrint(head)
