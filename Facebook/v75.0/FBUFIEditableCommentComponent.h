/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBUFIEditableCommentBodyComponent;

@interface FBUFIEditableCommentComponent : CKCompositeComponent {

	CKTypedComponentAction<> _didBeginEditingAction;
	CKTypedComponentAction<> _cancelEditingAction;
	CKTypedComponentAction<> _commitEditingAction;
	FBUFIEditableCommentBodyComponent* _bodyComponent;

}
+(id)newWithComment:(id)arg1 layoutDefinition:(id)arg2 toolbox:(id)arg3 mentionController:(id)arg4 didBeginEditingAction:(CKTypedComponentAction<>)arg5 cancelEditingAction:(CKTypedComponentAction<>)arg6 commitEditingAction:(CKTypedComponentAction<>)arg7 ;
+(id)initialState;
-(void)bodyComponentDidBeginEditing:(id)arg1 ;
-(void)bodyComponentDidUpdateText:(id)arg1 ;
-(void)didTapCancelButtonComponent:(id)arg1 ;
-(void)didTapUpdateButtonComponent:(id)arg1 ;
@end
