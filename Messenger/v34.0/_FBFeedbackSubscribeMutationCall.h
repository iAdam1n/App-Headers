/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBGraphQLMutationBase.h>

@class FBGraphQLQuery;

@interface _FBFeedbackSubscribeMutationCall : FBGraphQLMutationBase {

	FBGraphQLQuery* _mutation;

}
-(id)mutationName;
-(id)mutationRequest:(id)arg1 ;
-(id)payloadFromResponse:(id)arg1 ;
-(id)initWithInput:(id)arg1 optimisticPayloadFactory:(id)arg2 mutation:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
@end

