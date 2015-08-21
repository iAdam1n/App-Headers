/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString;

@interface FBMessageOutgoingAttribution : FBValueObject <NSCopying, NSCoding> {

	BOOL _fromTrustedExternalURL;
	BOOL _renderAsSticker;
	NSString* _sourceAppFBID;
	NSString* _bundleID;
	NSString* _attributedAppMetadata;

}

@property (nonatomic,copy,readonly) NSString * sourceAppFBID;                      //@synthesize sourceAppFBID=_sourceAppFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * attributedAppMetadata;              //@synthesize attributedAppMetadata=_attributedAppMetadata - In the implementation block
@property (nonatomic,readonly) BOOL fromTrustedExternalURL;                        //@synthesize fromTrustedExternalURL=_fromTrustedExternalURL - In the implementation block
@property (nonatomic,readonly) BOOL renderAsSticker;                               //@synthesize renderAsSticker=_renderAsSticker - In the implementation block
-(BOOL)renderAsSticker;
-(NSString *)attributedAppMetadata;
-(id)initWithSourceAppFBID:(id)arg1 bundleID:(id)arg2 attributedAppMetadata:(id)arg3 fromTrustedExternalURL:(BOOL)arg4 renderAsSticker:(BOOL)arg5 ;
-(NSString *)sourceAppFBID;
-(BOOL)fromTrustedExternalURL;
-(NSString *)bundleID;
@end

