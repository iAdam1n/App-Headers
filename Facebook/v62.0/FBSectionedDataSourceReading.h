/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSectionedDataSourceReading <NSObject>
@required
-(long long)numberOfObjectsInSection:(long long)arg1;
-(void)enumerateObjectsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2;
-(id)objectAtIndexPath:(id)arg1;
-(id)indexPathForObject:(id)arg1;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1;
-(long long)numberOfSections;
-(pair<id<NSObject>, NSIndexPath *>*)firstObjectPassingTest:(/*^block*/id)arg1;

@end
