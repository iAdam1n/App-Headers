/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableArray;

@interface FBSearchTypeaheadRequestQueue : NSObject {

	NSMutableArray* _internalQueue;
	unsigned long long _capacity;
	Mutex _spinLock;

}
-(BOOL)removeRequest:(id)arg1 isLast:(BOOL*)arg2 ;
-(void)drainQueue;
-(void)enqueueRequest:(id)arg1 ;
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

