/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKPAudioSessionClientSettings : NSObject {

	NSString* _category;
	unsigned long long _options;
	NSString* _mode;

}

@property (nonatomic,copy,readonly) NSString * category;                //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * mode;                    //@synthesize mode=_mode - In the implementation block
-(id)initWithCategory:(id)arg1 options:(unsigned long long)arg2 mode:(id)arg3 ;
-(id)logDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(NSString *)category;
-(NSString *)mode;
-(unsigned long long)options;
@end
