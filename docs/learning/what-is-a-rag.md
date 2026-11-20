## Asked:
What is a Rag.

## My initial guess:
From my understanding it's used in pair with multi language models to help generate answers. R stand for retrival, A stand for augment, and R stand for retrival. There is multiple stages first stage is chunking. second stage is converting these chucks into tokens. Third is storing these tokens into a vector database. After we do all of that. We can use algorithm to then retrive thse answer from the databse.


## Answer:
- information-retrieval is the mechanisum used to access additional data beyond their original
training set
- Embedding
    - Semi-structured or structured data (Knowldege graphs)
- Stored in vector database
- Encoder
    - Dot product ehance similarity scoring
    - Approximate nearest neighbor (ANN) improves retrieval efficiency over k-nearest neightbors(KNN)
    - Post processing can improve precision which is called late interaction
    - Hybrid one-hot vectors with dense vector
    - 
- Retriever Centric Methods
    - We can pre train retriever to optimize by learning retriever patterns
    - Can be optimized by retrivel probablitiles with genearted likelihood distribution
    - Reranking techniques.
- Chunking
    - 


## What I got wrong / what surprised me:
What did I misunderstand? What was unexpected?

## Sources:
- https://en.wikipedia.org/wiki/Retrieval-augmented_generation

## New questions this raised: