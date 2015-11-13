/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SLKFetchedDataSectionHeaderDelegate;
@class UIView, NSArray;

@interface SLKFetchedDataSection : NSObject {

	BOOL _shouldShowHeaderWhenEmpty;
	UIView* _headerView;
	UIView* _footerView;
	id<SLKFetchedDataSectionHeaderDelegate> _headerDelegate;
	NSArray* _configurations;

}

@property (nonatomic,retain) UIView * headerView;                                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                        //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic,__weak) id<SLKFetchedDataSectionHeaderDelegate> headerDelegate;              //@synthesize headerDelegate=_headerDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * configurations;                                                 //@synthesize configurations=_configurations - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHeaderWhenEmpty;                                             //@synthesize shouldShowHeaderWhenEmpty=_shouldShowHeaderWhenEmpty - In the implementation block
-(BOOL)shouldShowHeaderWhenEmpty;
-(id)initWithHeaderView:(id)arg1 configurations:(id)arg2 footerView:(id)arg3 shouldShowHeaderWhenEmpty:(BOOL)arg4 ;
-(void)setShouldShowHeaderWhenEmpty:(BOOL)arg1 ;
-(id)initWithHeaderDelegate:(id)arg1 configurations:(id)arg2 footerView:(id)arg3 shouldShowHeaderWhenEmpty:(BOOL)arg4 ;
-(id<SLKFetchedDataSectionHeaderDelegate>)headerDelegate;
-(void)setHeaderDelegate:(id<SLKFetchedDataSectionHeaderDelegate>)arg1 ;
-(NSArray *)configurations;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end

