/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
