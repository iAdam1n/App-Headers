/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface FBSDKGraphRequestBody : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,retain,readonly) NSData * data; 
+(id)mimeContentType;
-(void)appendUTF8:(id)arg1 ;
-(void)_appendWithKey:(id)arg1 filename:(id)arg2 contentType:(id)arg3 contentBlock:(/*^block*/id)arg4 ;
-(void)appendWithKey:(id)arg1 formValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 imageValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 dataValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 dataAttachmentValue:(id)arg2 logger:(id)arg3 ;
-(id)init;
-(NSData *)data;
@end
