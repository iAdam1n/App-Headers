/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/FBWebImageSpecifier.h>

@class FBMediaDataSourceProtocolWrapper, NSString;

@interface FBWebImageMediaPickerSpecifier : FBValueObject <NSCopying, FBWebImageSpecifier> {

	unsigned long long _index;
	FBMediaDataSourceProtocolWrapper* _dataSourceWrapper;
	long long _assetSizes;
	NSString* _logicalIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long index;                                               //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) FBMediaDataSourceProtocolWrapper * dataSourceWrapper;              //@synthesize dataSourceWrapper=_dataSourceWrapper - In the implementation block
@property (nonatomic,readonly) long long assetSizes;                                                   //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,copy,readonly) NSString * logicalIdentifier;                                      //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
+(id)type;
-(NSString *)logicalIdentifier;
-(id)initWithIndex:(unsigned long long)arg1 dataSourceWrapper:(id)arg2 assetSizes:(long long)arg3 logicalIdentifier:(id)arg4 ;
-(FBMediaDataSourceProtocolWrapper *)dataSourceWrapper;
-(long long)assetSizes;
-(unsigned long long)index;
@end

