using UnityEngine;
using UnityEngine.UI;

public class PopUpManager : MonoBehaviour
{
    [SerializeField] Text title;
    [SerializeField] Text timer;

    private static GameObject prefab;

    // PopUpManager�� �������� ������ �� �ִ� �Լ�
    public static PopUpManager Show(string message, string timer)
    {
        if(prefab == null)
        {
            prefab = (GameObject)Resources.Load("Game Result Window");
        }

        GameObject obj = Instantiate(prefab);

        PopUpManager resultPopup = obj.GetComponent<PopUpManager>();
        resultPopup.UpdateContent(message, timer);

        return resultPopup;
    }
  
    // �˾��� ������ ������Ʈ�ϴ� �Լ�
    public void UpdateContent(string titleMessage, string timerMassage)
    {
        title.text = titleMessage;
        timer.text = timerMassage;
    }

    public void CanclePopup()
    {
        Destroy(gameObject);
    }
}
