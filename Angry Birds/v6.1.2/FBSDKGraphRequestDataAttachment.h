/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface FBSDKGraphRequestDataAttachment : NSObject {

	NSString* _contentType;
	NSData* _data;
	NSString* _filename;

}

@property (nonatomic,copy,readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                 //@synthesize filename=_filename - In the implementation block
-(id)initWithData:(id)arg1 filename:(id)arg2 contentType:(id)arg3 ;
-(id)init;
-(NSData *)data;
-(NSString *)contentType;
-(NSString *)filename;
@end
