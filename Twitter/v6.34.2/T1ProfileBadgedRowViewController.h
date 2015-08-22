/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/T1ResizableHeaderSubheader.h>

@class T1BadgedTextTableRowAdapter, NSString;

@interface T1ProfileBadgedRowViewController : TFNItemsDataViewController <T1ResizableHeaderSubheader> {

	/*^block*/id _preferredHeightCheckBlock;
	id _subheaderInfo;
	/*^block*/id _selectionBlock;
	T1BadgedTextTableRowAdapter* _badgeAdapter;
	double _lastTableWidth;

}

@property (nonatomic,copy) id selectionBlock;                                         //@synthesize selectionBlock=_selectionBlock - In the implementation block
@property (nonatomic,retain) T1BadgedTextTableRowAdapter * badgeAdapter;              //@synthesize badgeAdapter=_badgeAdapter - In the implementation block
@property (assign,nonatomic) double lastTableWidth;                                   //@synthesize lastTableWidth=_lastTableWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id subheaderInfo;                                        //@synthesize subheaderInfo=_subheaderInfo - In the implementation block
@property (nonatomic,copy) id preferredHeightCheckBlock;                              //@synthesize preferredHeightCheckBlock=_preferredHeightCheckBlock - In the implementation block
-(void)didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setSubheaderInfo:(id)arg1 ;
-(id)subheaderInfo;
-(void)setPreferredHeightCheckBlock:(id)arg1 ;
-(id)preferredHeightCheckBlock;
-(void)setBadgeTitle:(id)arg1 ;
-(void)setBadgeAdapter:(T1BadgedTextTableRowAdapter *)arg1 ;
-(T1BadgedTextTableRowAdapter *)badgeAdapter;
-(void)_loadSections;
-(void)setLastTableWidth:(double)arg1 ;
-(double)lastTableWidth;
-(id)initWithTitle:(id)arg1 badgeTitle:(id)arg2 selectionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)sectionBreaksForIndexPath:(id)arg1 ;
-(double)preferredHeight;
-(void)setTitle:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)update;
-(id)selectionBlock;
-(void)setSelectionBlock:(id)arg1 ;
@end
