/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBPageComponentFlowComponentContext, FBPageComponentFlowTextInputWithTitleComponent, NSString;

@interface FBPageComponentFlowAddressTypeaheadComponent : CKCompositeComponent {

	FBPageComponentFlowComponentContext* _context;
	FBPageComponentFlowTextInputWithTitleComponent* _textInputComponent;
	long long _category;
	CKTypedComponentAction<> _itemSelectedAction;

}

@property (nonatomic,readonly) FBPageComponentFlowComponentContext * context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FBPageComponentFlowTextInputWithTitleComponent * textInputComponent;              //@synthesize textInputComponent=_textInputComponent - In the implementation block
@property (nonatomic,readonly) long long category;                                                               //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> itemSelectedAction;                                      //@synthesize itemSelectedAction=_itemSelectedAction - In the implementation block
@property (nonatomic,copy) NSString * text; 
+(id)newWithModel:(id)arg1 fieldName:(id)arg2 category:(long long)arg3 configuration:(const FBPageComponentFlowTextInputWithTitleComponentConfiguration*)arg4 selectedAction:(CKTypedComponentAction<>)arg5 context:(id)arg6 ;
-(FBPageComponentFlowTextInputWithTitleComponent *)textInputComponent;
-(CKTypedComponentAction<>)itemSelectedAction;
-(long long)category;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(FBPageComponentFlowComponentContext *)context;
@end
