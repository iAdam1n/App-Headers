/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSString;

@interface SSZipArchive : NSObject {

	NSString* _path;
	NSString* _filename;
	void* _zip;

}
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id*)arg5 delegate:(id)arg6 progressHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
+(id)_dateWithMSDOSFormat:(unsigned)arg1 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id*)arg5 delegate:(id)arg6 ;
+(BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(BOOL)arg3 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id*)arg5 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(BOOL)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2 ;
+(BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 ;
-(BOOL)writeData:(id)arg1 filename:(id)arg2 ;
-(BOOL)writeFileAtPath:(id)arg1 withFileName:(id)arg2 ;
-(void)zipInfo:(SCD_Struct_SS113*)arg1 setDate:(id)arg2 ;
-(BOOL)writeFolderAtPath:(id)arg1 withFolderName:(id)arg2 ;
-(BOOL)writeFile:(id)arg1 ;
-(BOOL)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)open;
@end
