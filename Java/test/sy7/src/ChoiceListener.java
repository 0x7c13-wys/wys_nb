import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.TextField;
import java.awt.event.*;
import java.awt.*;

public abstract class ChoiceListener implements ItemListener  {

    private JTextField NameTextField;
    private JTextField IDTextField;
    private JTextField AgeTextField;
    private Choice StudentChoice;
    private String[][] studentData;

    public ChoiceListener(JTextField NameTextField, JTextField IDTextField, JTextField AgeTextField, String[][] studentData) {
        this.NameTextField = NameTextField;
        this.IDTextField = IDTextField;
        this.AgeTextField = AgeTextField;
        this.studentData = studentData;
    }

    public ChoiceListener() {

    }


    public void setNameTextField(JTextField nameTextField) {
        this.NameTextField = nameTextField;
    }

    // 方法2：设置IDTextField
    public void setIdTextField(JTextField idTextField) {
        this.IDTextField = idTextField;
    }

    // 方法3：设置AgeTextField
    public void setGradeTextField(JTextField gradeTextField) {
        this.AgeTextField = gradeTextField;
    }
}
