/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNMessagesListDeltaUpdate : FBValueObject <NSCopying> {

	unsigned long long _threadContextUpdate;
	unsigned long long _threadMontageUpdate;
	unsigned long long _loadingUpdate;
	NSArray* _updateItems;

}

@property (nonatomic,readonly) unsigned long long threadContextUpdate;              //@synthesize threadContextUpdate=_threadContextUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long threadMontageUpdate;              //@synthesize threadMontageUpdate=_threadMontageUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long loadingUpdate;                    //@synthesize loadingUpdate=_loadingUpdate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * updateItems;                          //@synthesize updateItems=_updateItems - In the implementation block
-(unsigned long long)threadContextUpdate;
-(unsigned long long)threadMontageUpdate;
-(id)initWithThreadContextUpdate:(unsigned long long)arg1 threadMontageUpdate:(unsigned long long)arg2 loadingUpdate:(unsigned long long)arg3 updateItems:(id)arg4 ;
-(unsigned long long)loadingUpdate;
-(NSArray *)updateItems;
@end
