/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBPhotosCollageGridViewAbstractLayout : NSObject {

	FBGridViewItemSpans _highlightedItemSpan;
	unsigned long long _numItems;
	double _aspectRatio;

}

@property (assign,nonatomic) double aspectRatio;                                     //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) FBGridViewItemSpans highlightedItemSpan;              //@synthesize highlightedItemSpan=_highlightedItemSpan - In the implementation block
@property (nonatomic,readonly) FBGridViewItemSpans defaultItemSpan; 
@property (nonatomic,readonly) unsigned long long numItems;                          //@synthesize numItems=_numItems - In the implementation block
-(double)fitScoreForMedia:(id)arg1 ;
-(FBGridViewItemSpans)highlightedItemSpan;
-(id)initWithAspectRatio:(double)arg1 highlightedItemSpan:(FBGridViewItemSpans)arg2 numItems:(unsigned long long)arg3 ;
-(unsigned long long)highlightedIndexForIndex:(unsigned long long)arg1 ;
-(FBGridViewItemSpans)defaultItemSpan;
-(double)aspectRatio;
-(unsigned long long)numItems;
-(void)setAspectRatio:(double)arg1 ;
@end
