/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSArray;

@interface MNWStickerCollection : FBValueObject <NSCopying, NSCoding> {

	NSArray* _recentStickers;
	NSArray* _stickerSets;

}

@property (nonatomic,copy,readonly) NSArray * recentStickers;              //@synthesize recentStickers=_recentStickers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stickerSets;                 //@synthesize stickerSets=_stickerSets - In the implementation block
-(NSArray *)recentStickers;
-(id)initWithRecentStickers:(id)arg1 stickerSets:(id)arg2 ;
-(NSArray *)stickerSets;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

