/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBWebImageSpecifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FBWebImageAssetsLibrarySpecifier : FBValueObject <FBWebImageSpecifier, NSCopying> {

	unsigned long long _indexHint;
	NSURL* _assetURL;
	NSURL* _groupURL;
	long long _assetSizes;
	NSString* _logicalIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long indexHint;                   //@synthesize indexHint=_indexHint - In the implementation block
@property (nonatomic,copy,readonly) NSURL * assetURL;                          //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * groupURL;                          //@synthesize groupURL=_groupURL - In the implementation block
@property (nonatomic,readonly) long long assetSizes;                           //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,copy,readonly) NSString * logicalIdentifier;              //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
+(id)type;
-(id)initWithIndexHint:(unsigned long long)arg1 assetURL:(id)arg2 groupURL:(id)arg3 assetSizes:(long long)arg4 ;
-(unsigned long long)indexHint;
-(NSString *)logicalIdentifier;
-(long long)assetSizes;
-(id)initWithIndexHint:(unsigned long long)arg1 assetURL:(id)arg2 groupURL:(id)arg3 assetSizes:(long long)arg4 logicalIdentifier:(id)arg5 ;
-(NSURL *)groupURL;
-(NSURL *)assetURL;
@end
