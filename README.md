### SpeedCarver-AI 

A high-performance digital forensics pipeline designed for context-aware file fragment reassemb ly. This project replaces classic, rigid sequential carving methods by using low-level hardware systems engineering with local machine learning models.

## The Problem
Real-world data storage is chaotic. When you identify a start to a file you cannot guess where it may end or where the middle parts are. This causes hours apon hours of man-hours spent fixing this.

## The 3-Tier Pipeline Architecture

To solve the speed and scale bottleneck of the forensic manpower reconstruction, this system utilizes a "Fast Path / Slow Path" pipeline:

1. **Tier 1: The C Speed Engine (Fast Path)** Reads raw disk image sectors sequentially in 512-byte blocks at native hardware speed. It instantly calculates the **Shannon Entropy** of each sector to classify data types (e.g., plain text vs. high-entropy compressed layers) and filter out unallocated space.
   
2. **Tier 2: Graph Theory Pre-Sorting**
   Builds a local probability map (Contiguity Graph) of ambiguous sector boundaries. By analyzing edge bytes, it narrows down thousands of random orphan blocks to the top 2 or 3 logical candidates that mathematically fit a broken file's structure.

3. **Tier 3: The Local LLM "Context Weaver" (Slow Path Referee)**
   When the math layer faces structural ambiguity, the C engine extracts the raw hex boundaries and sends a micro-service API request to a lightweight, locally-hosted model. The AI acts as an automated analyst, evaluating the file stream's semantic logic to approve or deny the final sector stitch.

## Roadmap & Summer 2026 Blitz
- [ ] **Phase 1 (June):** Core C scanning infrastructure and Shannon Entropy calculation algorithms.
- [ ] **Phase 2 (July):** Boundary pre-sorting logic and local Ollama API integration wrapper.
- [ ] **Phase 3 (August):** End-to-end pipeline integration, automated file assembly, and testing with corrupted dummy images.

## Disclaimer
This is an open research and development project focused on systems architecture, data optimization, and applied artificial intelligence.
This will use LLMs to help code and research. 