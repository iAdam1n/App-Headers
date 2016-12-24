/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WADiskUsageResult, NSString, NSManagedObjectID;

@interface WADiskUsageRowData : NSObject {

	WADiskUsageResult* _result;
	NSString* _name;
	NSManagedObjectID* _chatSessionID;

}

@property (nonatomic,readonly) WADiskUsageResult * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSManagedObjectID * chatSessionID;              //@synthesize chatSessionID=_chatSessionID - In the implementation block
-(id)initWithResult:(id)arg1 chatSessionID:(id)arg2 inContext:(id)arg3 partnerName:(id)arg4 ;
-(NSManagedObjectID *)chatSessionID;
-(NSString *)name;
-(WADiskUsageResult *)result;
@end
