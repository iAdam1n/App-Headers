/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponentController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Facebook/FBCommentComposerMentionControllerDelegate.h>

@class FBRoundedShadowView, UITableView, FBUFIEditableCommentBodyComponent, UITextView, UIScrollView, FBUFIEditableCommentComponentUserInput, NSString;

@interface FBUFIEditableCommentBodyComponentController : CKStatefulViewComponentController <UITextViewDelegate, FBCommentComposerMentionControllerDelegate> {

	FBRoundedShadowView* _roundedView;
	UITableView* _mentionsTableView;

}

@property (nonatomic,readonly) FBUFIEditableCommentBodyComponent * bodyComponent; 
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UIScrollView * mentionsTableViewParentView; 
@property (nonatomic,retain) FBRoundedShadowView * roundedView;                                 //@synthesize roundedView=_roundedView - In the implementation block
@property (nonatomic,retain) UITableView * mentionsTableView;                                   //@synthesize mentionsTableView=_mentionsTableView - In the implementation block
@property (nonatomic,readonly) FBUFIEditableCommentComponentUserInput * userInput; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(void)didMount;
-(void)didUnmount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(BOOL)canRelinquishStatefulView;
-(void)commentComposerMentionControllerDidHideMentionPicker:(id)arg1 ;
-(void)commentComposerMentionControllerDidShowMentionPicker:(id)arg1 ;
-(void)commentComposerMentionControllerDidUpdateMentionPicker:(id)arg1 ;
-(void)commentComposerMentionController:(id)arg1 didChangeTextInTextView:(id)arg2 ;
-(UITableView *)mentionsTableView;
-(UIScrollView *)mentionsTableViewParentView;
-(FBUFIEditableCommentBodyComponent *)bodyComponent;
-(void)setMentionsTableView:(UITableView *)arg1 ;
-(void)repositionMentionsTableViewToFollowCursor;
-(BOOL)isRoundedViewLoaded;
-(void)dealloc;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(UITextView *)textView;
-(FBUFIEditableCommentComponentUserInput *)userInput;
-(void)setRoundedView:(FBRoundedShadowView *)arg1 ;
-(FBRoundedShadowView *)roundedView;
@end
