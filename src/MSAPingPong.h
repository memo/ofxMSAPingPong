#pragma once

namespace msa {
	
	template<class T>
	class PingPong {
	public:
		
		PingPong() {
			currentIndex = 0;
		}
		
		T& getTarget() {
			return objects[currentIndex];
		}
		
		T& getSource() {
			return objects[1-currentIndex];
		}
		
		void swap() {
			currentIndex = 1 - currentIndex;
		}
		
	protected:
		T		objects[2];
		int		currentIndex;
	};
}
