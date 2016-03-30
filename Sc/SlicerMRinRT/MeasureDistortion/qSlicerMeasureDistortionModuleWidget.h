/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
   
==============================================================================*/

#ifndef __qSlicerMeasureDistortionModuleWidget_h
#define __qSlicerMeasureDistortionModuleWidget_h

// CTK includes
#include <ctkPimpl.h>

// SlicerQt includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerMeasureDistortionModuleExport.h"

class qSlicerMeasureDistortionModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_MEASUREDISTORTION_EXPORT qSlicerMeasureDistortionModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerMeasureDistortionModuleWidget(QWidget *parent=0);
  virtual ~qSlicerMeasureDistortionModuleWidget();

public slots:
bool loadDicomData();
virtual void setMRMLScene(vtkMRMLScene *newScene);
void onNodeAddedEvent(vtkObject* scene, vtkObject* node);
void onNodeRemovedEvent(vtkObject* scene, vtkObject* node);
void onLayoutChanged(int);

protected:
  QScopedPointer<qSlicerMeasureDistortionModuleWidgetPrivate> d_ptr;

  virtual void setup();

private:
  Q_DECLARE_PRIVATE(qSlicerMeasureDistortionModuleWidget);
  Q_DISABLE_COPY(qSlicerMeasureDistortionModuleWidget);
};

#endif
