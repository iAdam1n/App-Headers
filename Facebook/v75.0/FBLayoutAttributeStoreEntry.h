/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryElement;
@class FBRichStoryElementLayoutAttributes;

@interface FBLayoutAttributeStoreEntry : NSObject {

	FBRichStoryElementLayoutAttributes* _layoutAttributes;
	id<FBRichStoryElement> _element;

}

@property (nonatomic,retain) FBRichStoryElementLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) id<FBRichStoryElement> element;                                     //@synthesize element=_element - In the implementation block
+(id)entryWithAttributes:(id)arg1 element:(id)arg2 ;
-(void)setLayoutAttributes:(FBRichStoryElementLayoutAttributes *)arg1 ;
-(FBRichStoryElementLayoutAttributes *)layoutAttributes;
-(id<FBRichStoryElement>)element;
-(void)setElement:(id<FBRichStoryElement>)arg1 ;
@end
