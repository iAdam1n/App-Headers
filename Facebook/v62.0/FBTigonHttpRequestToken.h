/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBHttpRequestToken.h>

@interface FBTigonHttpRequestToken : NSObject <FBHttpRequestToken> {

	shared_ptr<facebook::tigon::TigonRequestToken>* _tigonToken;

}
-(void)changePriorityTo:(long long)arg1 ;
-(void)changePriorityTo:(long long)arg1 priorityOrder:(unsigned long long)arg2 ;
-(id)initWithTigonRequestToken:(shared_ptr<facebook::tigon::TigonRequestToken>*)arg1 ;
-(void)cancel;
@end
