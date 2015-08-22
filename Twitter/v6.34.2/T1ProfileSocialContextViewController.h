/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/T1ResizableHeaderSubheader.h>

@protocol TFNTwitterStatusSocialContext;
@class NSString;

@interface T1ProfileSocialContextViewController : TFNItemsDataViewController <T1ResizableHeaderSubheader> {

	id _subheaderInfo;
	/*^block*/id _preferredHeightCheckBlock;
	id<TFNTwitterStatusSocialContext> _socialContext;
	/*^block*/id _selectionBlock;
	double _lastTableWidth;
	NSString* _dividerTitle;

}

@property (nonatomic,retain) id<TFNTwitterStatusSocialContext> socialContext;              //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,copy) id selectionBlock;                                              //@synthesize selectionBlock=_selectionBlock - In the implementation block
@property (assign,nonatomic) double lastTableWidth;                                        //@synthesize lastTableWidth=_lastTableWidth - In the implementation block
@property (nonatomic,retain) NSString * dividerTitle;                                      //@synthesize dividerTitle=_dividerTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id subheaderInfo;                                             //@synthesize subheaderInfo=_subheaderInfo - In the implementation block
@property (nonatomic,copy) id preferredHeightCheckBlock;                                   //@synthesize preferredHeightCheckBlock=_preferredHeightCheckBlock - In the implementation block
-(void)didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setSubheaderInfo:(id)arg1 ;
-(id)subheaderInfo;
-(void)setPreferredHeightCheckBlock:(id)arg1 ;
-(id)preferredHeightCheckBlock;
-(void)_loadSections;
-(void)setLastTableWidth:(double)arg1 ;
-(double)lastTableWidth;
-(id<TFNTwitterStatusSocialContext>)socialContext;
-(void)setSocialContext:(id<TFNTwitterStatusSocialContext>)arg1 ;
-(void)setSocialContext:(id)arg1 text:(id)arg2 ;
-(double)preferredHeight;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)update;
-(id)selectionBlock;
-(void)setSelectionBlock:(id)arg1 ;
-(NSString *)dividerTitle;
-(void)setDividerTitle:(NSString *)arg1 ;
@end
