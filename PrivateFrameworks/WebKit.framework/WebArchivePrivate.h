/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, WebResource;

@interface WebArchivePrivate : NSObject {
    struct RefPtr<WebCore::LegacyWebArchive> { 
        struct LegacyWebArchive {} *m_ptr; 
    WebResource *cachedMainResource;
    NSArray *cachedSubframeArchives;
    NSArray *cachedSubresources;
    } coreArchive;
}

+ (void)initialize;

- (struct LegacyWebArchive { int (**x1)(); unsigned int x2; struct RefPtr<WebCore::ArchiveResource> { struct ArchiveResource {} *x_3_1_1; } x3; struct Vector<WTF::RefPtr<WebCore::ArchiveResource>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::ArchiveResource> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct Vector<WTF::RefPtr<WebCore::Archive>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::Archive> {} *x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; }*)coreArchive;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithCoreArchive:(struct PassRefPtr<WebCore::LegacyWebArchive> { struct LegacyWebArchive {} *x1; })arg1;
- (void)setCoreArchive:(struct PassRefPtr<WebCore::LegacyWebArchive> { struct LegacyWebArchive {} *x1; })arg1;

@end
