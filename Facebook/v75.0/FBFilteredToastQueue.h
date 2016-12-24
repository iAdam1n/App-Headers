/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBToastQueuing.h>

@protocol FBToastQueuing;
@class NSString;

@interface FBFilteredToastQueue : NSObject <FBToastQueuing> {

	/*^block*/id _predicate;
	id<FBToastQueuing> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToastQueue:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(void)queueToast:(id)arg1 ;
-(void)removeToast:(id)arg1 ;
-(id)peek;
-(BOOL)isEmpty;
-(id)dequeue;
@end
