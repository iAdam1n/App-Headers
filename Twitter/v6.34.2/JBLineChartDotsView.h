/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol JBLineChartDotsViewDelegate;
@class NSDictionary;

@interface JBLineChartDotsView : UIView {

	id<JBLineChartDotsViewDelegate> _delegate;
	long long _selectedLineIndex;
	NSDictionary* _dotViewsDict;

}

@property (assign,nonatomic) id<JBLineChartDotsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedLineIndex;                           //@synthesize selectedLineIndex=_selectedLineIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * dotViewsDict;                           //@synthesize dotViewsDict=_dotViewsDict - In the implementation block
-(NSDictionary *)dotViewsDict;
-(long long)selectedLineIndex;
-(void)setSelectedLineIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setSelectedLineIndex:(long long)arg1 ;
-(void)setDotViewsDict:(NSDictionary *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<JBLineChartDotsViewDelegate>)arg1 ;
-(void)reloadData;
-(id<JBLineChartDotsViewDelegate>)delegate;
@end
