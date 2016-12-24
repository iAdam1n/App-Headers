/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionInterface <NSObject>
@required
-(id)synchronouslyApplyStateModification:(id)arg1;
-(void)asynchronouslyApplyStateModification:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addConnectionListener:(id)arg1;
-(void)removeConnectionListener:(id)arg1;
-(id)addEdgesFromConnectionPage:(id)arg1 loadedAtLocation:(id)arg2 userInfo:(id)arg3;
-(void)registerEdgeFilter:(id)arg1 withPriority:(long long)arg2;
-(id)connectionState;

@end
