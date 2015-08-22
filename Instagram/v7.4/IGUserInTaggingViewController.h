/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGUserInTaggingViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Instagram/IGUsertagTableViewDelegate.h>

@protocol IGUserInTaggingViewControllerDelegate;
@class UIBarButtonItem, UIView, UITextField, IGUserInTaggingView, UIImageView, IGLabel, IGUsertagTableView, IGUsertagGroup, NSMutableSet, NSString;

@interface IGUserInTaggingViewController : IGViewController <IGUserInTaggingViewDelegate, UITextFieldDelegate, IGUsertagTableViewDelegate> {

	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	UIView* _searchView;
	UITextField* _searchField;
	UIView* _taggingContainerView;
	IGUserInTaggingView* _taggingView;
	UIImageView* _imageView;
	IGLabel* _taggingAddLabel;
	IGLabel* _taggingEditLabel;
	IGUsertagTableView* _tableView;
	BOOL _viewAppeared;
	IGUsertagGroup* _usertags;
	NSMutableSet* _untaggedFaces;
	id<IGUserInTaggingViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;                                              //@synthesize usertags=_usertags - In the implementation block
@property (nonatomic,retain) NSMutableSet * untaggedFaces;                                           //@synthesize untaggedFaces=_untaggedFaces - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTaggingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGUsertagGroup *)usertags;
-(void)onCancelModal;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(void)numberOfFacesChanged:(id)arg1 ;
-(void)userInTaggingViewDidFinishTagging;
-(void)userInTaggingViewDidStartTaggingAtPosition:(CGPoint)arg1 ;
-(void)userInTaggingViewDidAddTag:(id)arg1 ;
-(void)userInTaggingViewDidRemoveTag:(id)arg1 ;
-(void)userInTaggingViewDidMoveTag:(id)arg1 ;
-(NSMutableSet *)untaggedFaces;
-(void)setUntaggedFaces:(NSMutableSet *)arg1 ;
-(void)onDoneTapped;
-(void)onLargeImageReady:(id)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)updateQuery;
-(void)updateTaggingViewAndLabels;
-(void)centerTagAtYPosition:(CGPoint)arg1 ;
-(void)userInTaggingViewDidFinishTaggingFace;
-(void)tagTableViewDidSelectUser:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGUserInTaggingViewControllerDelegate>)arg1 ;
-(id)init;
-(id<IGUserInTaggingViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)dismiss;
-(void)setImageView:(id)arg1 ;
@end
