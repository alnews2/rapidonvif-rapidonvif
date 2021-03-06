/* soapPullPointSubscriptionBindingService.cpp
   Generated by gSOAP 2.7.17 from onvif.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#include "soapPullPointSubscriptionBindingService.h"

PullPointSubscriptionBindingService::PullPointSubscriptionBindingService()
{	PullPointSubscriptionBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

PullPointSubscriptionBindingService::PullPointSubscriptionBindingService(const struct soap &_soap) :soap(_soap)
{ }

PullPointSubscriptionBindingService::PullPointSubscriptionBindingService(soap_mode iomode)
{	PullPointSubscriptionBindingService_init(iomode, iomode);
}

PullPointSubscriptionBindingService::PullPointSubscriptionBindingService(soap_mode imode, soap_mode omode)
{	PullPointSubscriptionBindingService_init(imode, omode);
}

PullPointSubscriptionBindingService::~PullPointSubscriptionBindingService()
{ }

void PullPointSubscriptionBindingService::PullPointSubscriptionBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
	{"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
	{"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
	{"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"ns1", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
	{"ns10", "http://www.onvif.org/ver10/network/wsdl/RemoteDiscoveryBinding", NULL, NULL},
	{"ns11", "http://www.onvif.org/ver10/network/wsdl/DiscoveryLookupBinding", NULL, NULL},
	{"tdn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
	{"ns2", "http://www.onvif.org/ver10/events/wsdl/PullPointSubscriptionBinding", NULL, NULL},
	{"ns3", "http://www.onvif.org/ver10/events/wsdl/EventBinding", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"ns4", "http://www.onvif.org/ver10/events/wsdl/SubscriptionManagerBinding", NULL, NULL},
	{"ns5", "http://www.onvif.org/ver10/events/wsdl/NotificationProducerBinding", NULL, NULL},
	{"ns6", "http://www.onvif.org/ver10/events/wsdl/NotificationConsumerBinding", NULL, NULL},
	{"ns7", "http://www.onvif.org/ver10/events/wsdl/PullPointBinding", NULL, NULL},
	{"ns8", "http://www.onvif.org/ver10/events/wsdl/CreatePullPointBinding", NULL, NULL},
	{"ns9", "http://www.onvif.org/ver10/events/wsdl/PausableSubscriptionManagerBinding", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
	{"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
	{"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
	{"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
	{"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
	{"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
	{"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
	{"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	this->namespaces = namespaces;
};

void PullPointSubscriptionBindingService::destroy()
{	soap_destroy(this);
	soap_end(this);
}

PullPointSubscriptionBindingService *PullPointSubscriptionBindingService::copy()
{	PullPointSubscriptionBindingService *dup = SOAP_NEW_COPY(PullPointSubscriptionBindingService(*(struct soap*)this));
	return dup;
}

int PullPointSubscriptionBindingService::soap_close_socket()
{	return soap_closesock(this);
}

int PullPointSubscriptionBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this, string, detailXML);
}

int PullPointSubscriptionBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this, subcodeQName, string, detailXML);
}

int PullPointSubscriptionBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this, string, detailXML);
}

int PullPointSubscriptionBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this, subcodeQName, string, detailXML);
}

void PullPointSubscriptionBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
void PullPointSubscriptionBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}

char *PullPointSubscriptionBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

void PullPointSubscriptionBindingService::soap_noheader()
{	header = NULL;
}

void PullPointSubscriptionBindingService::soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action)
{	::soap_header(this);
	this->header->wsa__MessageID = wsa__MessageID;
	this->header->wsa__RelatesTo = wsa__RelatesTo;
	this->header->wsa__From = wsa__From;
	this->header->wsa__ReplyTo = wsa__ReplyTo;
	this->header->wsa__FaultTo = wsa__FaultTo;
	this->header->wsa__To = wsa__To;
	this->header->wsa__Action = wsa__Action;
	this->header->wsse__Security = wsse__Security;
	this->header->wsa5__MessageID = wsa5__MessageID;
	this->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->header->wsa5__From = wsa5__From;
	this->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->header->wsa5__FaultTo = wsa5__FaultTo;
	this->header->wsa5__To = wsa5__To;
	this->header->wsa5__Action = wsa5__Action;
}

const SOAP_ENV__Header *PullPointSubscriptionBindingService::soap_header()
{	return this->header;
}

int PullPointSubscriptionBindingService::run(int port)
{	if (soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()))
				return this->error;
			(void)serve();
			soap_destroy(this);
			soap_end(this);
		}
	}
	else
		return this->error;
	return SOAP_OK;
}

SOAP_SOCKET PullPointSubscriptionBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this, host, port, backlog);
}

SOAP_SOCKET PullPointSubscriptionBindingService::accept()
{	return soap_accept(this);
}

int PullPointSubscriptionBindingService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->max_keep_alive;
#endif
	do
	{	soap_begin(this);
#ifdef WITH_FASTCGI
		if (FCGI_Accept() < 0)
		{
			this->error = SOAP_EOF;
			return soap_send_fault(this);
		}
#endif

		soap_begin(this);

#ifndef WITH_FASTCGI
		if (this->max_keep_alive > 0 && !--k)
			this->keep_alive = 0;
#endif

		if (soap_begin_recv(this))
		{	if (this->error < SOAP_STOP)
			{
#ifdef WITH_FASTCGI
				soap_send_fault(this);
#else 
				return soap_send_fault(this);
#endif
			}
			soap_closesock(this);

			continue;
		}

		if (soap_envelope_begin_in(this)
		 || soap_recv_header(this)
		 || soap_body_begin_in(this)
		 || dispatch() || (this->fserveloop && this->fserveloop(this)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this);
#else
			return soap_send_fault(this);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this);
		soap_end(this);
	} while (1);
#else
	} while (this->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___ns2__PullMessages(PullPointSubscriptionBindingService*);
static int serve___ns2__Seek(PullPointSubscriptionBindingService*);
static int serve___ns2__SetSynchronizationPoint(PullPointSubscriptionBindingService*);

int PullPointSubscriptionBindingService::dispatch()
{	soap_peek_element(this);
	if (!soap_match_tag(this, this->tag, "tev:PullMessages"))
		return serve___ns2__PullMessages(this);
	if (!soap_match_tag(this, this->tag, "tev:Seek"))
		return serve___ns2__Seek(this);
	if (!soap_match_tag(this, this->tag, "tev:SetSynchronizationPoint"))
		return serve___ns2__SetSynchronizationPoint(this);
	return this->error = SOAP_NO_METHOD;
}

static int serve___ns2__PullMessages(PullPointSubscriptionBindingService *soap)
{	struct __ns2__PullMessages soap_tmp___ns2__PullMessages;
	_tev__PullMessagesResponse tev__PullMessagesResponse;
	tev__PullMessagesResponse.soap_default(soap);
	soap_default___ns2__PullMessages(soap, &soap_tmp___ns2__PullMessages);
	soap->encodingStyle = NULL;
	if (!soap_get___ns2__PullMessages(soap, &soap_tmp___ns2__PullMessages, "-ns2:PullMessages", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->PullMessages(soap_tmp___ns2__PullMessages.tev__PullMessages, &tev__PullMessagesResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	tev__PullMessagesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tev__PullMessagesResponse.soap_put(soap, "tev:PullMessagesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tev__PullMessagesResponse.soap_put(soap, "tev:PullMessagesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns2__Seek(PullPointSubscriptionBindingService *soap)
{	struct __ns2__Seek soap_tmp___ns2__Seek;
	_tev__SeekResponse tev__SeekResponse;
	tev__SeekResponse.soap_default(soap);
	soap_default___ns2__Seek(soap, &soap_tmp___ns2__Seek);
	soap->encodingStyle = NULL;
	if (!soap_get___ns2__Seek(soap, &soap_tmp___ns2__Seek, "-ns2:Seek", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->Seek(soap_tmp___ns2__Seek.tev__Seek, &tev__SeekResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	tev__SeekResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tev__SeekResponse.soap_put(soap, "tev:SeekResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tev__SeekResponse.soap_put(soap, "tev:SeekResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns2__SetSynchronizationPoint(PullPointSubscriptionBindingService *soap)
{	struct __ns2__SetSynchronizationPoint soap_tmp___ns2__SetSynchronizationPoint;
	_tev__SetSynchronizationPointResponse tev__SetSynchronizationPointResponse;
	tev__SetSynchronizationPointResponse.soap_default(soap);
	soap_default___ns2__SetSynchronizationPoint(soap, &soap_tmp___ns2__SetSynchronizationPoint);
	soap->encodingStyle = NULL;
	if (!soap_get___ns2__SetSynchronizationPoint(soap, &soap_tmp___ns2__SetSynchronizationPoint, "-ns2:SetSynchronizationPoint", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->SetSynchronizationPoint(soap_tmp___ns2__SetSynchronizationPoint.tev__SetSynchronizationPoint, &tev__SetSynchronizationPointResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	tev__SetSynchronizationPointResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tev__SetSynchronizationPointResponse.soap_put(soap, "tev:SetSynchronizationPointResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tev__SetSynchronizationPointResponse.soap_put(soap, "tev:SetSynchronizationPointResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
