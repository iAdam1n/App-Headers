/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GPPOzLoggerBase.h>

@interface GPPOzLogger : GPPOzLoggerBase
-(id)flushEventsAndBuildQuery;
-(void)addEventsFromQuery:(id)arg1 ;
-(id)clientOzEventFromGPPOzEvent:(id)arg1 totalTime:(long long)arg2 networkTime:(long long)arg3 ;
-(id)favaDiagnosticsFromOzEvent:(id)arg1 totalTime:(long long)arg2 networkTime:(long long)arg3 timestamp:(long long)arg4 ;
-(id)actionTargetFromOzEvent:(id)arg1 ;
-(id)actionDataFromOzEvent:(id)arg1 ;
-(id)aclDetailsFromActionTarget:(id)arg1 ;
-(id)circles:(id)arg1 ;
-(id)clientLoggedCircleMember:(id)arg1 ;
-(id)rhsComponentFromActionData:(id)arg1 ;
@end

