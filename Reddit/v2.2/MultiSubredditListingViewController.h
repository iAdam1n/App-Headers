/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseTableViewController.h>
#import <Reddit/ScrollViewIndexBarDelegate.h>

@class Multi, NSArray, ScrollViewIndexBar, NSString;

@interface MultiSubredditListingViewController : BaseTableViewController <ScrollViewIndexBarDelegate> {

	Multi* _multi;
	NSArray* _currentSubreddits;
	ScrollViewIndexBar* _indexBar;

}

@property (nonatomic,retain) Multi * multi;                              //@synthesize multi=_multi - In the implementation block
@property (nonatomic,copy) NSArray * currentSubreddits;                  //@synthesize currentSubreddits=_currentSubreddits - In the implementation block
@property (nonatomic,retain) ScrollViewIndexBar * indexBar;              //@synthesize indexBar=_indexBar - In the implementation block
@property (nonatomic,readonly) NSArray * indexes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutViewsForFrame:(CGRect)arg1 ;
-(BOOL)allowNonEdgyNavigationPopGesture;
-(void)configureWithMulti:(id)arg1 ;
-(ScrollViewIndexBar *)indexBar;
-(CGRect)visibleIndexBarFrame;
-(void)setMulti:(Multi *)arg1 ;
-(Multi *)multi;
-(void)setCurrentSubreddits:(NSArray *)arg1 ;
-(NSArray *)currentSubreddits;
-(void)scrollViewIndexBar:(id)arg1 didSelectIndex:(id)arg2 ;
-(void)setIndexBar:(ScrollViewIndexBar *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(NSArray *)indexes;
@end
