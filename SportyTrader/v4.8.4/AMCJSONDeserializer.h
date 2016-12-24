/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMCJSONScanner;

@interface AMCJSONDeserializer : NSObject {

	AMCJSONScanner* scanner;
	unsigned long long options;

}

@property (nonatomic,retain) AMCJSONScanner * scanner; 
@property (nonatomic,retain) id nullObject; 
@property (assign,nonatomic) unsigned long long allowedEncoding; 
@property (assign,nonatomic) unsigned long long options; 
+(id)deserializer;
-(void)deserializeAsDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deserializeAsArray:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)deserialize:(id)arg1 error:(id*)arg2 ;
-(id)deserializeAsArray:(id)arg1 error:(id*)arg2 ;
-(void)setScanner:(AMCJSONScanner *)arg1 ;
-(unsigned long long)allowedEncoding;
-(id)nullObject;
-(void)setNullObject:(id)arg1 ;
-(void)setAllowedEncoding:(unsigned long long)arg1 ;
-(id)deserializeAsDictionary:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(AMCJSONScanner *)scanner;
@end
