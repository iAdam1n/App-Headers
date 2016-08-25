/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/ABOutlineViewController.h>
#import <AlienBlue/JMTabViewDelegate.h>
#import <AlienBlue/ItemSelectorDelegate.h>
#import <AlienBlue/JMTextViewDelegate.h>
#import <AlienBlue/PhotoUploadDelegate.h>
#import <AlienBlue/CaptchaEntryDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSMutableDictionary, Subreddit, NSString;

@interface CreatePostViewController : ABOutlineViewController <JMTabViewDelegate, ItemSelectorDelegate, JMTextViewDelegate, PhotoUploadDelegate, CaptchaEntryDelegate, UIAlertViewDelegate> {

	BOOL showAdvancedOptions_;
	int postType_;
	NSMutableDictionary* postDetails_;
	Subreddit* _subredditMatchingSelection;

}

@property (nonatomic,retain) NSMutableDictionary * postDetails; 
@property (retain) Subreddit * subredditMatchingSelection;                   //@synthesize subredditMatchingSelection=_subredditMatchingSelection - In the implementation block
@property (assign) int postType; 
@property (assign) BOOL showAdvancedOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithNavigation;
-(void)tabView:(id)arg1 didSelectTabAtIndex:(unsigned long long)arg2 ;
-(void)didUploadToImgurImage:(id)arg1 withUrl:(id)arg2 ;
-(id)staticFooterView;
-(void)sendToReddit;
-(void)setPostType:(int)arg1 ;
-(void)setPostDetails:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)postDetails;
-(void)prepareNodes;
-(id)generatePostTypeSelectorHeaderView;
-(void)postNodeSelected:(id)arg1 ;
-(id)createNodeForKey:(id)arg1 title:(id)arg2 placeholder:(id)arg3 icon:(id)arg4 disclosureIconName:(id)arg5 ;
-(void)moreNodeSelected:(id)arg1 ;
-(Subreddit *)subredditMatchingSelection;
-(int)postType;
-(void)refreshCreatePostRows;
-(id)textEntryControllerForNode:(id)arg1 ;
-(void)retrieveKeyFromAutosave:(id)arg1 ;
-(void)loadFromAutosave;
-(void)showSubredditsSelector;
-(void)showPhotoUpload;
-(void)showAccountSelector;
-(void)showLoadFromAutosaveConfirmation;
-(void)showTextEntryForNode:(id)arg1 ;
-(void)setShowAdvancedOptions:(BOOL)arg1 ;
-(void)setSubredditMatchingSelection:(Subreddit *)arg1 ;
-(void)refreshCreatePostRowsAnimated;
-(void)fetchMatchingSubredditDetails;
-(void)showCaptchaEntry;
-(void)itemSelectorDidSelectValue:(id)arg1 propertyKey:(id)arg2 ;
-(void)textViewDidEnterValue:(id)arg1 propertyKey:(id)arg2 ;
-(void)didEnterCaptcha:(id)arg1 forCaptchaId:(id)arg2 ;
-(id)sectionImageWithName:(id)arg1 ;
-(void)submitNodeSelected:(id)arg1 ;
-(void)viewSubmitRulesButtonPressed;
-(void)submitResponse:(id)arg1 ;
-(void)cancel;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidLoad;
-(BOOL)showAdvancedOptions;
@end

