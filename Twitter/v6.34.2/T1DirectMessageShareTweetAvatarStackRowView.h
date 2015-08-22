/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNLayoutMetricsEnvironment.h>

@class NSArray, NSString;

@interface T1DirectMessageShareTweetAvatarStackRowView : UIView <TFNLayoutMetricsEnvironment> {

	double _fillHeight;
	double _spacing;
	NSArray* _layoutConstraints;

}

@property (assign,nonatomic) double fillHeight;                        //@synthesize fillHeight=_fillHeight - In the implementation block
@property (assign,nonatomic) double spacing;                           //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;              //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)layoutMetricsDidChange:(id)arg1 ;
-(void)setFillHeight:(double)arg1 ;
-(NSArray *)layoutConstraints;
-(void)_invalidateConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(double)fillHeight;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
@end
