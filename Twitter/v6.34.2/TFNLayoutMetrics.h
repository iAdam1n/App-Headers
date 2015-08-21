/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>

@class TFNLayoutMetricsComputation, TFNTraitCollection, UIFont;

@interface TFNLayoutMetrics : NSObject <NSCopying> {

	TFNLayoutMetricsComputation* _computation;

}

@property (nonatomic,readonly) TFNTraitCollection * traitCollection; 
@property (nonatomic,readonly) double canvasWidth; 
@property (nonatomic,readonly) UIFont * contentFont; 
@property (nonatomic,readonly) BOOL hasCustomDisplayAreaEdgeInsets; 
@property (nonatomic,readonly) BOOL hasCustomContentEdgeInsets; 
@property (nonatomic,readonly) BOOL hasCustomLeadingControlAreaWidth; 
@property (nonatomic,readonly) BOOL hasCustomTrailingControlAreaWidth; 
@property (nonatomic,readonly) BOOL hasCustomAvatarSize; 
@property (nonatomic,readonly) double lineHeight; 
@property (nonatomic,readonly) double emSize; 
@property (nonatomic,readonly) double textOffsetY; 
@property (nonatomic,readonly) UIEdgeInsets displayAreaEdgeInsets; 
@property (nonatomic,readonly) CGPoint displayAreaOrigin; 
@property (nonatomic,readonly) double displayAreaWidth; 
@property (nonatomic,readonly) UIEdgeInsets contentEdgeInsets; 
@property (nonatomic,readonly) CGPoint contentOrigin; 
@property (nonatomic,readonly) double contentWidth; 
@property (nonatomic,readonly) UIEdgeInsets minimumContentEdgeInsets; 
@property (nonatomic,readonly) CGPoint cellSpacing; 
@property (nonatomic,readonly) CGPoint leadingControlAreaOrigin; 
@property (nonatomic,readonly) double leadingControlAreaWidth; 
@property (nonatomic,readonly) CGPoint trailingControlAreaOrigin; 
@property (nonatomic,readonly) double trailingControlAreaWidth; 
@property (nonatomic,readonly) CGPoint avatarOrigin; 
@property (nonatomic,readonly) CGSize avatarSize; 
@property (nonatomic,readonly) UIEdgeInsets bodyEdgeInsets; 
@property (nonatomic,readonly) CGPoint bodyOrigin; 
@property (nonatomic,readonly) double bodyWidth; 
@property (nonatomic,readonly) long long numberOfBodyColumns; 
@property (nonatomic,retain) TFNLayoutMetricsComputation * computation;              //@synthesize computation=_computation - In the implementation block
+(id)mainScreenPortraitLayoutMetrics;
+(id)layoutMetricsWithCanvasWidth:(double)arg1 simulateCanvasWidth:(double)arg2 traitCollection:(id)arg3 contentFont:(id)arg4 ;
+(id)layoutMetricsWithCanvasWidth:(double)arg1 traitCollection:(id)arg2 contentFont:(id)arg3 ;
+(id)_mainScreenPortraitTraitCollection;
+(id)_layoutMetricsForInputs:(id)arg1 baseComputation:(id)arg2 ;
+(id)layoutMetricsWithCanvasWidth:(double)arg1 traitCollection:(id)arg2 ;
+(void)clearLayoutMetricsCache;
+(id)layoutMetrics;
-(id)layoutMetricsForTableViewCellAppearance:(long long)arg1 sectionBreaks:(unsigned long long)arg2 ;
-(double)displayAreaWidth;
-(id)layoutMetricsWithContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)avatarSize;
-(BOOL)isEqualToLayoutMetrics:(id)arg1 ;
-(double)bodyWidth;
-(CGSize)avatarSizeForSize:(long long)arg1 ;
-(id)layoutMetricsWithAvatarSize:(CGSize)arg1 ;
-(CGPoint)bodyOrigin;
-(double)bodyPaddingInDirection:(long long)arg1 ;
-(double)textOffsetY;
-(CGPoint)avatarOrigin;
-(BOOL)isEmptyLayoutMetrics;
-(UIEdgeInsets)displayAreaEdgeInsets;
-(CGPoint)contentOrigin;
-(double)emSize;
-(UIFont *)contentFont;
-(CGPoint)displayAreaOrigin;
-(id)layoutMetricsWithDisplayAreaEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)canvasWidth;
-(UIEdgeInsets)bodyEdgeInsets;
-(UIEdgeInsets)minimumContentEdgeInsets;
-(CGPoint)leadingControlAreaOrigin;
-(double)leadingControlAreaWidth;
-(double)trailingControlAreaWidth;
-(TFNLayoutMetricsComputation *)computation;
-(id)initWithComputation:(id)arg1 ;
-(id)layoutMetricsWithLeadingControlAreaWidth:(double)arg1 ;
-(id)layoutMetricsWithTrailingControlAreaWidth:(double)arg1 ;
-(BOOL)hasCustomDisplayAreaEdgeInsets;
-(BOOL)hasCustomContentEdgeInsets;
-(BOOL)hasCustomLeadingControlAreaWidth;
-(BOOL)hasCustomTrailingControlAreaWidth;
-(BOOL)hasCustomAvatarSize;
-(CGPoint)trailingControlAreaOrigin;
-(long long)numberOfBodyColumns;
-(double)xOriginOfBodyColumnAtIndex:(long long)arg1 ;
-(double)widthOfBodyColumnAtIndex:(long long)arg1 ;
-(long long)indexOfBodyColumnNearestX:(double)arg1 inDirection:(long long)arg2 ;
-(double)widthOfSpaceForBodyColumnAtIndex:(long long)arg1 inDirection:(long long)arg2 ;
-(void)setComputation:(TFNLayoutMetricsComputation *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TFNTraitCollection *)traitCollection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lineHeight;
-(double)contentWidth;
-(UIEdgeInsets)contentEdgeInsets;
-(BOOL)isExpired;
-(CGPoint)cellSpacing;
@end

