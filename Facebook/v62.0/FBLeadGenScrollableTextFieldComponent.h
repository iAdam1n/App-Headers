/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemLeadGenInfoFieldData, CKComponent, FBLeadGenScrollableToolbox;

@interface FBLeadGenScrollableTextFieldComponent : CKCompositeComponent {

	FBMemLeadGenInfoFieldData* _data;
	CKComponent* _textFieldComponent;
	SEL _updateAction;
	FBLeadGenScrollableToolbox* _toolbox;

}

@property (nonatomic,readonly) FBMemLeadGenInfoFieldData * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CKComponent * textFieldComponent;                  //@synthesize textFieldComponent=_textFieldComponent - In the implementation block
@property (nonatomic,readonly) SEL updateAction;                                  //@synthesize updateAction=_updateAction - In the implementation block
@property (nonatomic,readonly) FBLeadGenScrollableToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithFieldData:(id)arg1 state:(unsigned long long)arg2 updateAction:(SEL)arg3 toolbox:(id)arg4 ;
-(FBLeadGenScrollableToolbox *)toolbox;
-(CKComponent *)textFieldComponent;
-(void)keyboardPopUp;
-(FBMemLeadGenInfoFieldData *)data;
-(SEL)updateAction;
@end
