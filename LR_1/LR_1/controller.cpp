#include "controller.h"


int control(MainScene &main_scene, const CurAction &act, ActionType type)
{
    static Model frame_model = InitModel();
    int rc = OK;
    switch(type)
    {
    case OPEN:
        rc = ReadFile(act.filename, frame_model);
        break;
    case SAVE:
        rc = SaveFile(act.filename, frame_model);
        break;
    case ROTATE:
        rc = RotateModel(act.rotate, frame_model);
        break;
    case TRANSFER:
        rc = TransferModel(act.transfer, frame_model);
        break;
    case SCALE:
        rc = ScaleModel(act.scale, frame_model);
        break;
    case DRAW:
        rc = DrawModel(main_scene, frame_model);
        break;
    case CLEAR:
        rc = ClearModel(main_scene, frame_model);
        break;
    }
    return rc;
}
