/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLMutationBase.h>

@class FBGraphQLQuery;

@interface _FBMessengerCallToActionPostbackMutationCall : FBGraphQLMutationBase {

	FBGraphQLQuery* _mutation;

}
-(id)initWithInput:(id)arg1 optimisticPayloadFactory:(id)arg2 mutation:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)mutationName;
-(id)mutationRequest:(id)arg1 ;
-(id)payloadFromResponse:(id)arg1 ;
@end
