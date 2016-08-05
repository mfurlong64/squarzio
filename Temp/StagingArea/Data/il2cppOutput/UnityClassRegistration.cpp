struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 52 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//10. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//11. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//12. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//13. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//14. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//15. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//16. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//17. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//18. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//19. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//20. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//21. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//22. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//23. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//24. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//25. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//26. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//27. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//28. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//29. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//30. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//31. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//32. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//33. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//34. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//35. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//36. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//37. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//38. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//39. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//40. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//41. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//42. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//43. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//44. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//45. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//46. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//47. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//48. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//49. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//50. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//51. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
