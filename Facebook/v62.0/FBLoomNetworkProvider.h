/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBLoomTraceProvider.h>

@class FBHttpLowerStack;

@interface FBLoomNetworkProvider : NSObject <FBLoomTraceProvider> {

	FBHttpLowerStack* _lowerStack;
	unique_ptr<facebook::mobile::xplat::executor::InlineSyncExecutor, std::__1::default_delete<facebook::mobile::xplat::executor::InlineSyncExecutor> >* _executor;
	unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >* _observerToken;
	shared_ptr<FBLoomTigonObserver>* _observer;
	mutex _mutex;

}
-(void)loomTraceWillBeginWithContext:(id)arg1 ;
-(void)loomTraceDidEnd;
-(unsigned long long)eventProviderIdentifier;
-(id)customHeaderFromProviderWithContext:(id)arg1 ;
-(id)initWithLowerTigonStack:(id)arg1 ;
-(int)writeNetworkEvent:(int)arg1 forRequest:(long long)arg2 ;
-(void)writeNetworkKey:(const char*)arg1 length:(unsigned long long)arg2 value:(const char*)arg3 length:(unsigned long long)arg4 onEntry:(int)arg5 ;
@end
