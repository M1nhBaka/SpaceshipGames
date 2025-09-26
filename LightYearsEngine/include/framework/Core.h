#include<stdio.h>
#include<unordered_map>
namespace ly
{

	////define data type
	//template<typename T>
	//using unique = std::unique_ptr<T>;

	//template<typename T>
	//using shared = std::shared_ptr<T>;

	//template<typename T>
	//using weak = std::weak_ptr<T>;

	//template<typename T>
	//using List = std::vector<T>;

	//template<typename KeyType, typename ValueType, typename Pr = std::less<KeyType>>
	//using Map = std::map<KeyType, ValueType>;


	//template<typename KeyType, typename ValueType, typename Hasher = std::hash<KeyType>>
	//using Dictionary = std::unordered_map<KeyType, ValueType, Hasher>


	//logging macro 
	#define LOG(M, ... ) printf (M "\n", ##__VA_ARGS__	)
}
