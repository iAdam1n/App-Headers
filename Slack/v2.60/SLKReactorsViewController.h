/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITableViewController.h>

@class NSString, NSArray, UILabel;

@interface SLKReactorsViewController : UITableViewController {

	NSString* _firstReactionName;
	NSArray* _reactions;
	NSArray* _allEmojis;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) NSString * firstReactionName;              //@synthesize firstReactionName=_firstReactionName - In the implementation block
@property (nonatomic,retain) NSArray * reactions;                       //@synthesize reactions=_reactions - In the implementation block
@property (nonatomic,retain) NSArray * allEmojis;                       //@synthesize allEmojis=_allEmojis - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
+(void)presentReactions:(id)arg1 firstReactionName:(id)arg2 fromViewController:(id)arg3 fromRect:(CGRect)arg4 ;
+(double)contentHeightForReactions:(id)arg1 ;
-(NSArray *)allEmojis;
-(NSArray *)reactions;
-(void)setReactions:(NSArray *)arg1 ;
-(void)setAllEmojis:(NSArray *)arg1 ;
-(id)userAtIndexPath:(id)arg1 ;
-(void)setFirstReactionName:(NSString *)arg1 ;
-(NSString *)firstReactionName;
-(id)initWithReactions:(id)arg1 firstReactionName:(id)arg2 ;
-(id)reactionForSection:(long long)arg1 ;
-(id)emojiForSection:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(UILabel *)titleLabel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

