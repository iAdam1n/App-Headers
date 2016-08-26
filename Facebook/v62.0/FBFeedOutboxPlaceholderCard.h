/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBFeedOutboxPreviewImage, NSString;

@interface FBFeedOutboxPlaceholderCard : FBValueObject <NSCopying> {

	unsigned long long _cardSize;
	FBFeedOutboxPreviewImage* _placeholderFullImage;
	NSString* _placeholderIconImageAssetName;
	CGSize _placeholderIconImageSize;

}

@property (nonatomic,readonly) unsigned long long cardSize;                                       //@synthesize cardSize=_cardSize - In the implementation block
@property (nonatomic,copy,readonly) FBFeedOutboxPreviewImage * placeholderFullImage;              //@synthesize placeholderFullImage=_placeholderFullImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderIconImageAssetName;                     //@synthesize placeholderIconImageAssetName=_placeholderIconImageAssetName - In the implementation block
@property (nonatomic,readonly) CGSize placeholderIconImageSize;                                   //@synthesize placeholderIconImageSize=_placeholderIconImageSize - In the implementation block
-(unsigned long long)cardSize;
-(id)initWithCardSize:(unsigned long long)arg1 placeholderFullImage:(id)arg2 placeholderIconImageAssetName:(id)arg3 placeholderIconImageSize:(CGSize)arg4 ;
-(CGSize)placeholderIconImageSize;
-(FBFeedOutboxPreviewImage *)placeholderFullImage;
-(NSString *)placeholderIconImageAssetName;
@end
