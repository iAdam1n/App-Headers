/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBDeferredComputation.h>

@class NSString;

@interface FBDeferredMapComputation : NSObject <FBDeferredComputation> {

	/*^block*/id _mapBlock;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) id mapBlock;                     //@synthesize mapBlock=_mapBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMapBlock:(/*^block*/id)arg1 ;
-(id)mapBlock;
-(id)init;
-(unsigned long long)type;
@end

