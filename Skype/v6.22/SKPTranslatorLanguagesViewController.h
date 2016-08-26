/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SKPTranslatorLanguagesViewControllerDelegate;
@class NSArray, SKPConversation, UITableView, NSString;

@interface SKPTranslatorLanguagesViewController : SKPViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _shouldApplyChangesOnDone;
	BOOL _localLanguage;
	id<SKPTranslatorLanguagesViewControllerDelegate> _delegate;
	NSArray* _supportedSpeechAndTextTranslatorLanguages;
	NSArray* _supportedTextOnlyTranslatorLanguages;
	SKPConversation* _conversation;
	UITableView* _tableView;

}

@property (nonatomic,copy) NSArray * supportedSpeechAndTextTranslatorLanguages;                             //@synthesize supportedSpeechAndTextTranslatorLanguages=_supportedSpeechAndTextTranslatorLanguages - In the implementation block
@property (nonatomic,copy) NSArray * supportedTextOnlyTranslatorLanguages;                                  //@synthesize supportedTextOnlyTranslatorLanguages=_supportedTextOnlyTranslatorLanguages - In the implementation block
@property (assign,getter=isLocalLanguage,nonatomic) BOOL localLanguage;                                     //@synthesize localLanguage=_localLanguage - In the implementation block
@property (nonatomic,readonly) SKPConversation * conversation;                                              //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyChangesOnDone;                                                 //@synthesize shouldApplyChangesOnDone=_shouldApplyChangesOnDone - In the implementation block
@property (assign,nonatomic,__weak) id<SKPTranslatorLanguagesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldBeConnectionAware:(id)arg1 ;
-(void)setShouldApplyChangesOnDone:(BOOL)arg1 ;
-(void)setupTableView;
-(void)updateInsets;
-(void)skp_didChangeTopBannerOffset:(double)arg1 ;
-(id)sortLanguagesLists:(id)arg1 ;
-(BOOL)isLocalLanguage;
-(void)setLocalLanguage:(BOOL)arg1 ;
-(BOOL)shouldApplyChangesOnDone;
-(NSArray *)supportedSpeechAndTextTranslatorLanguages;
-(void)setSupportedSpeechAndTextTranslatorLanguages:(NSArray *)arg1 ;
-(NSArray *)supportedTextOnlyTranslatorLanguages;
-(void)setSupportedTextOnlyTranslatorLanguages:(NSArray *)arg1 ;
-(void)updateMsnpConnectionIndicator;
-(id)initWithConversation:(id)arg1 localLanguage:(BOOL)arg2 ;
-(BOOL)shouldShowBanner;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SKPTranslatorLanguagesViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<SKPTranslatorLanguagesViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SKPConversation *)conversation;
@end
