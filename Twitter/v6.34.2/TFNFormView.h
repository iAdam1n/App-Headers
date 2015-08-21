/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNCollectionView.h>

@class NSArray;

@interface TFNFormView : TFNCollectionView {

	BOOL _setInset;
	BOOL _rotating;
	BOOL _animating;
	BOOL _adjustingForFormTextField;

}

@property (assign,nonatomic) BOOL setInset;                                                                  //@synthesize setInset=_setInset - In the implementation block
@property (assign,getter=isRotating,nonatomic) BOOL rotating;                                                //@synthesize rotating=_rotating - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                              //@synthesize animating=_animating - In the implementation block
@property (assign,getter=isAdjustingForFormTextField,nonatomic) BOOL adjustingForFormTextField;              //@synthesize adjustingForFormTextField=_adjustingForFormTextField - In the implementation block
@property (nonatomic,readonly) NSArray * orderedVisibleCells; 
-(NSArray *)orderedVisibleCells;
-(BOOL)isAdjustingForFormTextField;
-(void)setAdjustingForFormTextField:(BOOL)arg1 ;
-(void)setSetInset:(BOOL)arg1 ;
-(BOOL)setInset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)isRotating;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setRotating:(BOOL)arg1 ;
@end

