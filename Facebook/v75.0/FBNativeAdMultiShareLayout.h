/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryLayout.h>
#import <Facebook/FBRichStoryElementDisplayAttributeCalculator.h>

@class NSMutableDictionary, FBNativeAdMultiShareChildContentNodeMetrics, NSDictionary, FBRichStoryBlockDisplayContext, NSString;

@interface FBNativeAdMultiShareLayout : FBRichStoryLayout <FBRichStoryElementDisplayAttributeCalculator> {

	NSMutableDictionary* _blockLayouts;
	double _fitHeight;
	FBNativeAdMultiShareChildContentNodeMetrics* _childShareNodeMetrics;
	NSDictionary* _presentationAttributes;
	FBRichStoryBlockDisplayContext* _displayContext;
	CGSize _constrainingSize;

}

@property (nonatomic,copy) NSDictionary * presentationAttributes;                          //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (nonatomic,retain) FBRichStoryBlockDisplayContext * displayContext;              //@synthesize displayContext=_displayContext - In the implementation block
@property (assign,nonatomic) CGSize constrainingSize;                                      //@synthesize constrainingSize=_constrainingSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)presentationAttributes;
-(CGSize)constrainingSize;
-(id)layoutForElement:(id)arg1 descriptor:(id)arg2 presentationAttributes:(id)arg3 constrainingSize:(CGSize)arg4 ;
-(void)setConstrainingSize:(CGSize)arg1 ;
-(void)setPresentationAttributes:(NSDictionary *)arg1 ;
-(id)initWithShareBlocks:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(double)_generateFitHeightForShareBlocks:(id)arg1 withChildShareNodeMetrics:(id)arg2 isRedesignEnabled:(BOOL)arg3 ;
-(double)_generateHeaderNodeFitHeightForRedesignMultiShareAdObject:(id)arg1 withShareNodeMetrics:(id)arg2 ;
-(id)_layoutDescriptionForBlocks:(id)arg1 withChildShareNodeMetrics:(id)arg2 ;
-(CGSize)_shareConstrainingSizeWithChildShareNodeMetrics:(id)arg1 ;
-(void)setDisplayContext:(FBRichStoryBlockDisplayContext *)arg1 ;
-(FBRichStoryBlockDisplayContext *)displayContext;
@end
